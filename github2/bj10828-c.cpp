#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	stack<int> s;
	int tcase;
	string order;

	cin >> tcase;
	for (int i = 0; i < tcase; i++) {
		cin >> order;
		if (order == "push") {
			int num;
			cin >> num;
			s.push(num);
		}

		else if (order == "pop") {
			if (s.empty() == true)
				cout << '-1' << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}

		else if (order == "size") {
			cout << s.size() << '\n';
		}

		else if (order == "empty") {
			cout << s.empty() << '\n';
		}

		else if (order == "top") {
			if (s.empty() == true)
				cout << '-1' << '\n';
			else
				cout << s.top() << '\n';
		}
	}
}

// empty()는 비어있으면 true, 있으면 false

/*#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    stack <int> st;
    int N;
    string order;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> order;
        if (order == "push")
        {
            int X;
            cin >> X;
            st.push(X);
        }
        else if (order == "pop")
        {
            if (st.empty() == true)
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << st.top() << "\n";
                st.pop();
            }
        }
        else if (order == "size")
        {
            cout << st.size() << "\n";
        }
        else if (order == "empty")
        {
            cout << st.empty() << "\n";
        }
        else if (order == "top")
        {
            if (st.empty() == true) cout << -1 << "\n";
            else cout << st.top() << "\n";
        }
    }
}*/
