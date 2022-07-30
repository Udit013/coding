#include <iostream>
using namespace std;

struct Udit {
	string sec;
	int age;
	int marks[5];
  int sum;
  float perc;
	
};
void display(struct Udit s[], int n);
int calc(struct Udit s[], int n, int j)
{
  int sum=0;
  for(int i=0;i<5;i++)
  {
    sum=sum+s[j].marks[i];
  }
  s[j].sum=sum;
  return s[j].sum;
}
void find(struct Udit s[], int n, int r)
{
  for(int j=0;j<n;j++)
  {
    if(s[j].age == r)
    {
      cout << "\nDisplaying the details:" << endl;
      cout << "Name of student: " << s[j].sec << endl;
      cout << "Roll of the student:" << s[j].age << endl;
      cout << "Student marks:" << endl;
      for(int i=0;i<5;i++)
      {
        cout << s[j].marks[i] << endl;
      }
      cout << "Sum of marks of the student: " << s[j].sum << endl;
      cout << "Percentage of the student: " << (s[j].sum/5) << endl;
      cout << endl;
      break;
    }
  }
}
void range(struct Udit s[], int n, int l, int u)
{
  for(int j=0;j<n;j++)
  {
    s[j].perc=(s[j].sum/5);
    if(s[j].perc > l && s[j].perc < u)
    {
      cout << "\nDisplaying the details: " << endl;
      cout << "Name of student: " << s[j].sec << endl;
      cout << "Roll of the student: " << s[j].age << endl;
      cout << "Student marks: " << endl;
      for(int i=0;i<5;i++)
      {
        cout << "Marks of subject " << i << " is " << s[j].marks[i] << endl;
      }
      cout << "Sum of marks of the student: " << s[j].sum << endl;
      cout << "Percentage of the student: " << s[j].perc << endl;
    }
  }
}
void sorting(struct Udit s[], int n)
{
  cout << "\nBefore sorting: " << endl;
  display(s,n);
  struct Udit temp;
  for(int j=0;j<n;j++)
  {
    for(int k=j+1;k<n;k++)
    {
      if(s[j].sum > s[k].sum)
      {
        temp=s[j];
        s[j]=s[k];
        s[k]=temp;
      }
    }
  }
  cout << "\nAfter sorting: " << endl;
  display(s,n);
}
void display(struct Udit s[], int n)
{
  for(int j=0;j<n;j++)
  {
    cout << "\nDisplaying the details: " << endl;
    cout << "Name of student: " << s[j].sec << endl;
    cout << "Roll of the student: " << s[j].age << endl;
    cout << "Student marks: " << endl;
    for(int i=0;i<5;i++)
    {
      cout << "Marks of subject " << (i+1) << " is " << s[j].marks[i] << endl;
    }
    cout << "Sum of marks of the student: " << s[j].sum << endl;
    cout << "Percentage of the student: " << s[j].perc << endl;
    }
}
int main()
{
  struct Udit s[5];
  int i,n,j;
  int r;
  int l=0,u=0;
  cout << "Enter the number of student details you want: ";
  cin >> n;
  for(j=0;j<n;j++)
  {
    cout << "\nEnter the name of student: " ;
    cin >> s[j].sec;
    printf("Enter the student roll: ");
    cin >> s[j].age;
    printf("Enter the 5 subject marks: \n");
    for(i=0;i<5;i++)
    {
      cin >> s[j].marks[i];
    }
    s[j].sum = calc(s,n,j);
    cout << "Sum of marks of the student: " << s[j].sum << endl;
    cout << "Percentage of the student: " << (s[j].sum/5) << endl;
  }
  cout << endl;
  cout << "\nEnter the student roll you want to find: " << endl;
  cin >> r;
  find(s,n,r);
  cout << "Enter the lower limit: ";
  cin >> l;
  cout << "Enter the upper limit: ";
  cin >> u;
  cout << endl;
  range(s,n,l,u);
  sorting(s,n);
  return 0;
}