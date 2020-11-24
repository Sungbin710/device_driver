#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GLP");

static int hello_module_init(void)
{
	printk("Hello Moudle! \n");
	return 0;
}

static void hello_module_exit(void)
{
	printk("Good-bye Module! \n");
}

module_init(hello_module_init);
module_exit(hello_module_exit);

