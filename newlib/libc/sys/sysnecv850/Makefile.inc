if MAY_SUPPLY_SYSCALLS
libc_a_SOURCES += \
	%D%/_exit.c %D%/access.c %D%/chmod.c %D%/chown.c %D%/close.c %D%/creat.c %D%/crt1.c \
	%D%/execv.c %D%/execve.c %D%/fork.c %D%/fstat.c %D%/getpid.c %D%/isatty.c \
	%D%/kill.c %D%/lseek.c %D%/open.c %D%/pipe.c %D%/read.c %D%/link.c \
	%D%/sbrk.c %D%/stat.c %D%/time.c %D%/trap.S %D%/unlink.c %D%/utime.c %D%/wait.c %D%/write.c \
	%D%/times.c %D%/gettime.c %D%/rename.c
endif
