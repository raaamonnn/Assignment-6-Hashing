#ifndef DOUBLEHASHINGSTLMAP_H_
#define DOUBLEHASHINGSTLMAP_H_

#include "header.h"
class DoubleHashingSTLMap
{
private:
	map<int, string> map;
public:
	DoubleHashingSTLMap(std::map<int, string> &map)
	{
		this->map = map;
	}
	int firstHashing(int &n)
	{
		n %= 29;
		return n;
	}

	int secondHashing(int &n)
	{
		n = 13 - n % 13;
		return n;
	}

	int doubleHashing(int &n, int &j) //n == value | j == j
	{
		return (firstHashing(n) + (j*(secondHashing(n))));
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

			key = doubleHashing(key,j);

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


#endif /* DOUBLEHASHINGSTLMAP_H_ */
