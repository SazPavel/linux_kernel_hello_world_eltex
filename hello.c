#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sazonov Pavel");
MODULE_DESCRIPTION("A simple Hello world");
MODULE_VERSION("0.1");

static int __init hello_init(void)
{
    printk(KERN_INFO "Loading hello world module\n");
    printk(KERN_INFO "Hello world\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye World\n");
}

module_init(hello_init);
module_exit(hello_exit);
