// this header is needed for NULL; normally it's included by 
// other header files, but we don't need any other headers here.
#include <cstddef>

struct EnemySpaceShip 
{
	int x_coordinate;
	int y_coordinate;
	int weapon_power;
	EnemySpaceShip* p_next_enemy;
}; 

EnemySpaceShip* getNewEnemy ()
{
	EnemySpaceShip* p_ship = new EnemySpaceShip;
	p_ship->x_coordinate = 0;
	p_ship->y_coordinate = 0;
	p_ship->weapon_power = 20;
	p_ship->p_next_enemy = NULL;
	return p_ship;
}

void upgradeWeapons (EnemySpaceShip* p_ship)
{
	p_ship->weapon_power += 10;
}

int main ()
{
	EnemySpaceShip* p_enemy = getNewEnemy();
	upgradeWeapons( p_enemy );
}
