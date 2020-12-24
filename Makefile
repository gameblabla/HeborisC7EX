PRGNAME     = heboris.elf
CC			= gcc

SRCDIR		= ./src/game/ ./src/main_sdl ./src/ ./src/script
VPATH		= $(SRCDIR)
SRC_C		= $(foreach dir, $(SRCDIR), $(wildcard $(dir)/*.c))
OBJ_C		= $(notdir $(patsubst %.c, %.o, $(SRC_C)))
OBJS		= $(OBJ_C)

CFLAGS		= -O2 -Wall -Wextra
CFLAGS		+= -DLINUX -DHOME_SAVE
CFLAGS		+= -Isrc/game/ -Isrc/main_sdl -Isrc/ -Isrc/script

ifeq ($(PROFILE), YES)
CFLAGS 		+= -fprofile-generate=./
else ifeq ($(PROFILE), APPLY)
CFLAGS		+= -fprofile-use -fbranch-probabilities
endif

LDFLAGS     = -nodefaultlibs -lc -lgcc -lm -lSDL -lSDL_mixer -lSDL_image -Wl,--as-needed -Wl,--gc-sections -flto 

# Rules to make executable
$(PRGNAME): $(OBJS)  
	$(CC) $(CFLAGS) -o $(PRGNAME) $^ $(LDFLAGS)

$(OBJ_C) : %.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(PRGNAME) *.o
