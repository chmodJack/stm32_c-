#include "sys.h"
//系统中断分组设置化
//系统中断分组设置�
//修改日期:2012/9/10
void NVIC_Configuration(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
}
