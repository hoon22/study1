#include <stdio.h>


int main()
{
	int hero_attack;
	int enemy_hp=30;
        int save;
	save=enemy_hp-hero_attack;
	printf("주인공의 공격력을 입력하세요:");
	scanf("%d", hero_attack);
	
	printf("주인공은 공격력이 %d입니다.",hero_attack);
	
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.",hero_attack);

	if(save<0)
        {
		printf("적의 잔여 hp: %d",save);
		printf("주인공이 적을 물리쳤습니다! happy end");
	}
	else
	{
		printf("적의 잔여 hp: %d",save);
		printf("적이 주인공을 공격하여 주인공이 뒤졌습니다. game over.");
	}


	return 0;
}	
