#include "sys.h"
//ÏµÍ³ÖÐ¶Ï·Ö×éÉèÖÃ»¯
//ÏµÍ³ÖÐ¶Ï·Ö×éÉèÖÃ»
//ÐÞ¸ÄÈÕÆÚ:2012/9/10
void NVIC_Configuration(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//ÉèÖÃNVICÖÐ¶Ï·Ö×é2:2Î»ÇÀÕ¼ÓÅÏÈ¼¶£¬2Î»ÏìÓ¦ÓÅÏÈ¼¶
}
