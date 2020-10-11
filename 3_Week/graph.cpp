// @brief This program does bla bla
#include <iostream>
#include <vector>
#include <random>

// To see random usage check: https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c

using namespace std;

class Graph
{
	public:
		Graph(int n, float edge_density, int distance_range) : nodes(n), edge_density(edge_density), distance_range(distance_range)
		{
			random_device dev;
    		mt19937 rng(dev());	
    		uniform_int_distribution<mt19937::result_type> random_density(1, 100);
    		uniform_int_distribution<mt19937::result_type> random_distance(1, distance_range);

    		// cout << dist(rng) << endl;

    		edge_density *= 100; // Scaling

			matrix.resize(nodes);
			for(int i = 0; i < matrix.size(); i++)
			{
				matrix[i].resize(nodes);
				for(int j = 0; j < matrix[i].size(); j++)
				{
					if(random_density(rng) < edge_density)
						matrix[i][j] = random_distance(rng);
				}
			}

			for(int i = 0; i < matrix.size(); i++)
			{
				for(int j = 0; j < matrix[i].size(); j++)
					cout << matrix[i][j] << " ";

				cout << endl;
			}
		} 

	private:
		int nodes;
		float edge_density;
		int distance_range;
		vector<vector<int>> matrix; 
};

int main(int argc, char const *argv[])
{
	Graph graph1(5, 0.1, 20);



	return 0;
}