TARGET = des
INCLUDE_DIR = -I include

CC=mpicc
CCFLAGS += -march=native -O3 -pipe -Wall $(INCLUDE_DIR)
#LFLAGS += -lpthread -ldl -Wl,--export-dynamic
LFLAGS += -fopenmp
OBJFLAGS += -fopenmp
OBJS = $(patsubst src/%.c,obj/%.o,$(wildcard src/*.c))

.PHONY : clean all

all: $(TARGET)

clean:
	rm -f  $(TARGET) && rm -rf $(OBJS)

obj/%.o: src/%.c include/%.h
	$(CC) $(CCFLAGS) -c $< -o $@ $(OBJFLAGS)

$(TARGET): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(TARGET) $(LFLAGS)

run: all
	mpirun --hostfile hostfile -n 1 des
