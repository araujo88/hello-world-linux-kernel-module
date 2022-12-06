# hello-world-linux-kernel-module
Linux kernel module tutorial

## Loading and unloading the module

### Compile

`make`

### Load the module

`sudo insmod ./hello-world.ko`

### Check the kernel buffer

`sudo dmesg`

### List kernel modules

`lsmod`

### Unload the module

`sudo rmmod hello_world`
