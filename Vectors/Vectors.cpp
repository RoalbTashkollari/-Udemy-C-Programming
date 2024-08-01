#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//vector <char> vowels; //empty
	//vector <char> vowels(5); //5 all initialized to 0
	vector <char> vowels{ 'a','e','i','o','u' };

	cout << vowels[0] << endl;
	cout << vowels[4] << endl;


	//vector <int> test_scores(3); //3 elements all initialized to 0
	//vector <int> test_scores(3,100); //3 elements all initialized to 100
	vector <int> test_scores{ 100,98,89 };
	cout << "\nTest scores using array syntax:" << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << "\nTest scores using vector syntax:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "\n[There are " << test_scores.size() << " scores in the vector" << endl;


	cout << "\nEnter 3 test scores to overwrite the previous:" << endl;
	cin >> test_scores.at(0) >> test_scores.at(1) >> test_scores.at(2);
	cout << "\nUpdated scores:" << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;


	int score_to_add{ 0 };
	cout << "\nAdd a score:" << endl;
	cin >> score_to_add;
	test_scores.push_back(score_to_add);

	cout << "\nAdd another score:" << endl;
	cin >> score_to_add;
	test_scores.push_back(score_to_add);

	cout << "\nAdded scores:" << endl;
	for (int i = 0; i < test_scores.size(); i++)
		cout << test_scores.at(i) << endl;

	// Example of 2D-vector

	vector <vector <int>> movie_ratings
	{ {1,2,3,4},
		{1,2,3,4},
		{1,2,3,4}
	};

	cout << "\nHere are the movie rating for reviewer #1 using syntax:" << endl;
	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

	cout << "\nHere are the movie rating for reviewer #2 using syntax:" << endl;
	cout << movie_ratings[1][0] << endl;
	cout << movie_ratings[1][1] << endl;
	cout << movie_ratings[1][2] << endl;
	cout << movie_ratings[1][3] << endl;

	cout << "\nHere are the movie rating for reviewer #3 using syntax:" << endl;
	cout << movie_ratings[2][0] << endl;
	cout << movie_ratings[2][1] << endl;
	cout << movie_ratings[2][2] << endl;
	cout << movie_ratings[2][3] << endl;

}