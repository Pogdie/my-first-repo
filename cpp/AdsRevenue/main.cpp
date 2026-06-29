#include <iostream>

struct ad {
  int watchedAds{};
  double clickedAdsPercentage{};
  double averageEarnings{};
};

ad getAdInfo() {
  ad temp{};
  std::cout << "Watched ads?: ";
  std::cin >> temp.watchedAds;
  std::cout << "Clicked ads percentage?: ";
  std::cin >> temp.clickedAdsPercentage;
  std::cout << "Average earnings per ad?: ";
  std::cin >> temp.averageEarnings;
  return temp;
}

void printAdInfo(const ad &ad) {
  std::cout << "\nWatched ads: " << ad.watchedAds << '\n';
  std::cout << "Clicked ads percentage: " << ad.clickedAdsPercentage << '\n';
  std::cout << "Avarege earnings: " << ad.averageEarnings << '\n';

  double totalEarnings{ad.watchedAds * (ad.clickedAdsPercentage / 100) *
                       ad.averageEarnings};
  std::cout << "total earnings: " << totalEarnings << '\n';
}

int main() {
  printAdInfo(getAdInfo());
  return 0;
}
