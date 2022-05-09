#include <iostream> 
#include <stack>  
using namespace std;
void display(stack <int> s1)
{
	stack <int> ms = s1;
	while (!ms.empty())  //ms.empty() =1 if empty 0 if not empty 
	{
		cout << '\t' << ms.top(); //top() will return top element in stack
		ms.pop(); //delete
	}
	cout << '\n';
}
 void display(stack <float> s1)
{
	stack <float> ms = s1;
	while (!ms.empty())
	{
		cout << '\t' << ms.top();
		ms.pop();
	}
	cout << '\n';
}
int main()
{
	stack<int> st; //vector<int>
	st.push(32);
	st.push(21);
	st.push(39);
	st.push(89);
	st.push(25);

	cout << "The stack st is: ";
	display(st);
	cout << "\n size of the stack is : " << st.size();
	cout << "\n top element is  : " << st.top();
        st.pop();
        cout<<"\nstack after deleting the element is\n";
	display(st);
       stack<float> st1;
	st1.push(3.2);
	st1.push(2.1);
	st1.push(3.9);
	st1.push(8.9);
	st1.push(2.5);

	cout << "The stack st is: ";
	display(st1);
	cout << "\n size of the stack is : " << st1.size();
	cout << "\n top element is  : " << st1.top();
        st1.pop();
        cout<<"\nstack after deleting the element is\n";
	display(st1);
	return 0;
}
