#ifndef QUADRATICHASHINGSTLMAP_H_
#define QUADRATICHASHINGSTLMAP_H_

#include "header.h"
class QuadraticHashingSTLMap
{
private:
	map<int, string> map;
public:
	QuadraticHashingSTLMap(std::map<int, string> &map)
	{
		this->map = map;
	}

	int quadraticHashing(int &n, int &j) //n == value | j == j
	{
		j *= j;
		return (((n % 29) + j) % 29);
	}


	void insert(int key, string value) //inserts the key, if the hashed key already exists: DOUBLE HASH IT. then insert into the map
	{
		cout << "INSERTING\n" << "KEY: " << key << " DATA: " << value << endl << endl;
		bool emptyBucket = false;
		int j = 1;
		while(!emptyBucket)
		{
			if(map.find(key) == map.end())
			{
				map.insert(std::make_pair(key,value));
				return;
			}

			key = quadraticHashing(key,j);

			j++;
		}
	}

	void deleteKey(int key) //inserts the key, if the hashed key already exists: DOUBLE HASH IT. then insert into the map
	{
		map.erase(key);
	}

	const std::map<int, string>& getMap() const {
		return map;
	}

	void setMap(const std::map<int, string> &map) {
		this->map = map;
	}
};



#endif /* QUADRATICHASHINGSTLMAP_H_ */
