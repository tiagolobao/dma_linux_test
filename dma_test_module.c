#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("MIT");
MODULE_AUTHOR("Tiago Lobao");
MODULE_DESCRIPTION("Testing writing/reading with DMA");

static int __init dma_test_init(void)
{
    printk(KERN_INFO "Starting dma-test module\n");
    return 0;
}

static void __exit dma_test_cleanup(void)
{
    printk(KERN_INFO "Cleaning up dma-test module.\n");
}

module_init(dma_test_init);
module_exit(dma_test_cleanup);