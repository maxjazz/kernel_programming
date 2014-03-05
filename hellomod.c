#include <linux/init.h>
#include <linux/module.h>


MODULE_LICENSE ( "GPL" );
MODULE_AUTHOR  ( "Maxim Prokopyev <jazzelastic@gmail.com>" );

static int __init hello_init( void )
{
  printk ("Hello world!");
  return 0;
}



static void __exit hello_exit( void )
{
  printk ("Goodbye worl!");
}


module_init ( hello_init );
module_exit ( hello_exit );
