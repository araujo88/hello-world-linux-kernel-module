#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello world!");

static int hello_init(void)
{
  
	printk(KERN_INFO "Hello, %s\n", whom);
	printk(KERN_INFO "The process ID is %d and the command name is %s\n", current->pid, current->comm);

	return 0;
}

static void hello_exit(void)
{
	printk(KERN_INFO "Goodbye, cruel world\n");
}

module_init(hello_init);
module_exit(hello_exit);
