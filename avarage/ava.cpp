# include <iostream.h>
# include <conio.h>
class get_avarage
{
private:
	float gpa[100];
public:
	void func(int n)
	{
		int i;
		for(i=0;i<n;++i)
		{
			cout<<"gpa["<<i<<"]= ";
			cin>>gpa[i];
		}
	}
	float ava(int n)
	{
		int i;
		float a=0.00;
		for(i=0;i<n;++i)
		{
			a+=gpa[i];
		}
		return (a/n);
	}
};
int main()
{
	int n;
	get_avarage s1;
    cout<<"\n n= ";
	cin>>n;
	s1.func(n);
	cout<<"\a Avarage is "<<s1.ava(n);
	getch();
	return 0;
}



