#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <windows.h>

using namespace std;
int cc=11;
//user defined function to change color
string setcolor(unsigned short color){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}

vector<vector<bool>> Adj_matrix;

class Subjects{
    public:
    string subject_name,subject_code;
    vector<int> semester;
    void getInpput()
    {
        int sem,semesterCount;
        cout<<"Enter number of semesters this course appears:";
        cin>>semesterCount;
        for(int i=0;i<semesterCount;i++){
            cout<<"Semester Appearance "<<i+1<<":";
            cin>>sem;
            semester.push_back(sem);
        }
        cout<<"Subject name:";
        cin>>subject_name;
        cout<<"Subject code:";
        cin>>subject_code;
    }
};

vector<Subjects> allSubject;

void displayColors(int color[])
{
  vector<vector<int>> cls;
  for(int i=0;i<Adj_matrix.size();i++)
  {
    vector<int> temp;
    for(int j=0;j<Adj_matrix.size();j++)
    {
      if(color[j]==(i+1))
      {
        temp.push_back(j);
      }
    }
    cls.push_back(temp);
  }
  cout<<endl;
  for(int i=0;i<Adj_matrix.size();i++)
  {
    if(!cls[i].empty())
    {
      cout<<endl;
      cout<<setw(50);
      cout<<"=================\n";
      cout<<setw(45);
      cout<<"Slot-->"<<i+1<<endl;
      cout<<setw(50);
      cout<<"=================\n";
      setcolor(i+12);

      cout<<setw(35);
      cout<<"SUBJECT NAME :";
      cout<<setw(35);
      cout<<"SUBJECT CODE:\n ";
      for(int j=0;j<cls[i].size();j++)
      {
        cout<<setw(30);
        cout<<allSubject[cls[i][j]].subject_name;
        cout<<setw(30);
        cout<<allSubject[cls[i][j]].subject_code<<"\n ";
      }
    }
    setcolor(7);
  }
}

//Function to display
void Display(int color[]) {
  cout << "The colors given to vertices are:" << endl;
  for (int i = 0; i < Adj_matrix.size(); i++)
    cout << "Vertex " << i + 1 << " is given color:" << color[i] << endl;
  cout << endl;
}

//Function to check constraints
bool satisfyConstraints(int v, vector<vector<bool>> Adj_matrix, int color[], int c)
{
  for (int i = 0; i < Adj_matrix.size(); i++) {
    if (Adj_matrix[v][i] && c == color[i])
      return false;
  }
  return true;
}

/* A recursive utility function
to solve m-coloring problem */
bool m_Coloring_Helper(vector<vector<bool>> Adj_matrix, int m, int color[], int v) {

  //If all vertices are assigned a color
  if (v == Adj_matrix.size())
    return true;

  //Try different colors to vertex v
  for (int c = 1; c <= m; c++) {

    // Check if given color is valid
    if (satisfyConstraints(v, Adj_matrix, color, c)) {
      color[v] = c;

      //Assign colors to rest of the vertices
      if (m_Coloring_Helper(Adj_matrix, m, color, v + 1) == true)
        return true;

      //Backtrack
      color[v] = 0;
    }
  }

  // If no color can be assigned
  return false;
}

bool m_Coloring(vector<vector<bool>> Adj_matrix, int m) {

  int color[Adj_matrix.size()];
  for (int i = 0; i < Adj_matrix.size(); i++) {
    color[i] = 0;
  }
  if (m_Coloring_Helper(Adj_matrix, m, color, 0) == false) {
    cout << "\tNo such arrangement exists!!";
    return false;
  }

  // Print the solution
  Display(color);
  displayColors(color);
  return true;
}

void displayMatrix() {
   int i, j;

   for(i = 0; i < Adj_matrix.size(); i++) {
      for(j = 0; j < Adj_matrix.size(); j++) {
        cout << Adj_matrix[i][j] << " ";
      }
      cout << endl;
   }
}
void add_edge(int u, int v) {
   Adj_matrix[u][v] = 1;
   Adj_matrix[v][u] = 1;
}

int main() {
  // The adjacency matrix of the graph
    int choice;
    do{
        Subjects S;
        cout<<"\n1.Add course\n2.View Schedule\n";
        cout<<"\nChoice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                S.getInpput();
                allSubject.push_back(S);
                break;
            case 2:
                Adj_matrix.clear();
                for(int i=0;i<allSubject.size();i++)
                {
                  vector<bool> temp;
                  for(int j=0;j<allSubject.size();j++)
                  {
                    temp.push_back(0);
                  }
                  Adj_matrix.push_back(temp);
                }

                for(int i=0;i<allSubject.size();i++)
                {
                    for(int j=0;j<allSubject.size();j++)
                    {
                        if(i!=j)
                        {
                            for(int k=0;k<allSubject[i].semester.size();k++)
                            {
                                for(int l=0;l<allSubject[j].semester.size();l++)
                                {
                                    if(allSubject[i].semester[k]==allSubject[j].semester[l])
                                    {
                                        add_edge(i,j);
                                    }
                                }
                            }
                        }
                    }
                }
                displayMatrix();
                m_Coloring(Adj_matrix,3);
                break;
            case 3:
                exit(0);
        }
    }while(1);
  // Number of colors
  return 0;
}
