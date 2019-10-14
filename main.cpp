#include "header.h"
#include "doubleHashingSTLMap.h"
#include "quadraticHashingSTLMap.h"

void printMap(std::map<int, string> map)
{
	std::map<int,string>::iterator itr;
    cout << "PRINTING THE MAP \n";
    int i = 0;
    for (itr = map.begin(); itr != map.end(); ++itr) {
        cout << "Bucket# " << i << ":" << '\t' << "("<< itr->first <<","
             << ' ' << itr->second << ")"<<'\n';
        i++;
    }
}

int main()
{
	map<int, string> map;
	DoubleHashingSTLMap hmap(map);

	cout << "**************\n"
		 << "*** PART 1 ***\n"
	     << "**************\n";

	hmap.insert(18, "Laguna Niguel");
	hmap.insert(41, "Mission Viejo");
	hmap.insert(22, "San Clemente");
	hmap.insert(44, "Irvine");
		hmap.deleteKey(41);
	hmap.insert(58, "Lake Forest");
	hmap.insert(32, "San Diego");
	hmap.insert(49, "Anaheim");
		hmap.deleteKey(58);
	hmap.insert(31, "Los Angeles");
	hmap.insert(17, "Orange");
	hmap.insert(72, "Palm Springs");
	hmap.insert(41, "Riverside");
		hmap.deleteKey(72);
	hmap.insert(19, "Brea");
	hmap.insert(60, "Santa Ana");
	hmap.insert(35, "Tustin");
	hmap.insert(103, "Ocean Side");
	hmap.insert(11, "La Jolla");
	hmap.insert(18, "Del Mar");
	hmap.insert(22, "Aliso Viejo");
	hmap.insert(49, "Laguna Beach");
	hmap.deleteKey(41);
	hmap.insert(42, "Vista");
	hmap.insert(49, "San Diego");
	hmap.insert(99, "San Juan");
	hmap.insert(29, "Dana Point");
	hmap.insert(88, "El Segundo");
	hmap.insert(41, "San Clemente");
	hmap.insert(62, "Laguna Hills");

	printMap(hmap.getMap());

	cout << "**************\n"
		 << "*** PART 2 ***\n"
	     << "**************\n";
	cout << endl << "********************************************************\n"
			     << "*** NOW DOING THE SAME THING USING QUADRATIC HASHING ***\n"
				 << "********************************************************\n\n";

	std::map<int, string> amap;
	QuadraticHashingSTLMap qmap(amap);

	qmap.insert(18, "Laguna Niguel");
	qmap.insert(41, "Mission Viejo");
	qmap.insert(22, "San Clemente");
	qmap.insert(44, "Irvine");
	qmap.deleteKey(41);
	qmap.insert(58, "Lake Forest");
	qmap.insert(32, "San Diego");
	qmap.insert(49, "Anaheim");
	qmap.deleteKey(58);
	qmap.insert(31, "Los Angeles");
	qmap.insert(17, "Orange");
	qmap.insert(72, "Palm Springs");
	qmap.insert(41, "Riverside");
	qmap.deleteKey(72);
	qmap.insert(19, "Brea");
	qmap.insert(60, "Santa Ana");
	qmap.insert(35, "Tustin");
	qmap.insert(103, "Ocean Side");
	qmap.insert(11, "La Jolla");
	qmap.insert(18, "Del Mar");
	qmap.insert(22, "Aliso Viejo");
	qmap.insert(49, "Laguna Beach");
	qmap.deleteKey(41);
	qmap.insert(42, "Vista");
	qmap.insert(49, "San Diego");
	qmap.insert(99, "San Juan");
	qmap.insert(29, "Dana Point");
	qmap.insert(88, "El Segundo");
	qmap.insert(41, "San Clemente");
	qmap.insert(62, "Laguna Hills");

	printMap(qmap.getMap());

return 0;
}
