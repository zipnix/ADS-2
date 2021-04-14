// Copyright 2021 NNTU-CS

int countPairs1(int *arr, int len, int value) {
  int score = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if ((arr[i] + arr[j]) == value)
        score++;
    }
  }
 return score;
}

int countPairs2(int *arr, int len, int value) {
  int score = 0;
  for (int i = len - 1; i >= 0; i--) {
    if (arr[i] <= value) {
      for (int j = 0; j < i; j++) {
        if (arr[i] + arr[j] == value)
          score++;
      }
    }
  }
    return score;
}

int countPairs3(int *arr, int len, int value) {
  int score = 0, left = 0, right, center;
  for (int i = len - 1; i >= 0; i--) {
    if (arr[i] <= value) {
      len = i;
      brake;
      }
      for ( int i = 0; i < len - 1; i++) {
        left = i + 1;
        right = len - 1;
      while (left < right) {
        center = (left + right) / 2;
        if (arr[center] < value - arr[i])
          left = center + 1;
        else right = center;
      }
      }
      while (arr[left] == value - arr[i]) {
        score++;
        left++;
      }
  }
  return score;
}
