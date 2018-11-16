#include <bits/stdc++.h>
using namespace std;

class Box {
private:
	int width, height;
	int numOfInfected;
	vector<vector<int>> container;
	queue<pair<int, int>> starter;
public:
	Box(int width, int height)
		: width(width), height(height),
		numOfInfected(0) {};
	void setContainer();
	queue<pair<int, int>> getStarter() const;
	bool isCompleted() const;
	void infectAndPushLink(pair<int, int> p,
		queue<pair<int, int>> &st);
	bool isBlocked(int i, int j) const {
		if(this->container[i][j] == -1)
			return true;
		return false;
	}
	int getNum() const {
		return this->numOfInfected;
	}
	bool isBaked(int i, int j) const {
		if(this->container[i][j] == 1)
			return true;
		return false;
	}
};

void Box::setContainer() {
	int state;
	for(int i=0; i<height; ++i) {
		vector<int> line;
		for(int j=0; j<width; ++j) {
			cin >> state;
			line.push_back(state);
			if(state == 1) {
				pair<int, int> p(i, j);
				this->starter.push(p);
			}
		}
		this->container.push_back(line);
	}
}

queue<pair<int, int>> Box::getStarter() const {
	return this->starter;
}

bool Box::isCompleted() const {
	for(int i=0; i<container.size(); ++i)
		for(int j=0; j<container[i].size(); ++j)
			if(container[i][j] == 0)
				return false;
	return true;
}

void Box::infectAndPushLink(
	pair<int, int> p, queue<pair<int, int>> &st) {
	vector<pair<int, int>> fourDir =
		{{0,1}, {1,0}, {0,-1}, {-1,0}};
	int i, j;
	i = get<0>(p);
	j = get<1>(p);
	for(int k=0; k<fourDir.size(); ++k) {
		int newI = i+get<0>(fourDir[k]);
		int newJ = j+get<1>(fourDir[k]);
		if(0<=newI && newI<this->height &&
			0<=newJ && newJ<this->width &&
			!isBlocked(newI, newJ) &&
			!isBaked(newI, newJ)) {
			this->container[newI][newJ] = 1;
			this->numOfInfected++;
			pair<int, int> p(newI, newJ);
			st.push(p);
		}
	}
}

int main(void)
{
	int M, N, i, j;
	int temp;
	int day=0;
	queue<pair<int, int>> st1, st2;
	cin >> M >> N;
	Box box(M, N);
	box.setContainer();

	st1 = box.getStarter();
	while(!box.isCompleted()) {
		temp = box.getNum();
		while(st1.size()!=0) {
			box.infectAndPushLink(st1.front(), st2);
			st1.pop();
		}
		++day;
		if(temp == box.getNum()) {
			cout << -1 << endl;
			return 0;
		}
		if(box.isCompleted())
			break;
		temp = box.getNum();
		while(st2.size()!=0) {
			box.infectAndPushLink(st2.front(), st1);
			st2.pop();
		}
		++day;
		if(temp == box.getNum()) {
			cout << -1 << endl;
			return 0;
		}
	}

	cout << day << endl;
	return 0;
}
