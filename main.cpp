#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

char c;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (cin >> c) {
    if ('w' == c) {
      cout << "chunbae";
      return 0;
    }

    if ('b' == c) {
      cout << "nabi";
      return 0;
    }

    if ('g' == c) {
      cout << "yeongcheol";
      return 0;
    }
  }

  return 0;
}