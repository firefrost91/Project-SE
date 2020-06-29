#include<iostream>
#include<stdlib.h>
 
using namespace std;
 
void GenerateRandGraphs(int NOE, int NOV)
{
	int i, j, edge[NOE][2], count;
	i = 0;
	while(i < NOE)
	{
		edge[i][0] = rand()%NOV+1;
		edge[i][1] = rand()%NOV+1;
 
		if(edge[i][0] == edge[i][1])
			continue;
		else
		{
			for(j = 0; j < i; j++)
			{
				if((edge[i][0] == edge[j][0] && edge[i][1] == edge[j][1]) || (edge[i][0] == edge[j][1] && edge[i][1] == edge[j][0]))
					i--;
			}
		}
		i++;
	}
	cout<<"\nThe generated random random graph is: ";
	for(i = 0; i < NOV; i++)
	{
		count = 0;
		cout<<"\n\t"<<i+1<<"-> { ";
		for(j = 0; j < NOE; j++)
		{
			if(edge[j][0] == i+1)
			{
				cout<<edge[j][1]<<"   ";
				count++;
			}
			else if(edge[j][1] == i+1)
			{
				cout<<edge[j][0]<<"   ";
				count++;
			}
			else if(j == NOE-1 && count == 0)
				cout<<"Isolated Vertex!";
		}
		cout<<" }";
	}	
}
int main()
{
	int n, i, e, v;
	cout<<"Random graph generation: ";
	cout<<"\nEnter the number of vertexes the graph have: ";
	cin>>v;
	cout<<"\nEnter the number of edges the graph have: ";
	cin>>e;
	GenerateRandGraphs(e, v);
}
