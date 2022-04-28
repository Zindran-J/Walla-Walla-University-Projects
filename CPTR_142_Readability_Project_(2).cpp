#include <cctype>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

// Forenote:
// If the entry does not have a period at the end, it will NOT be registered
// into the vector and be tested. If something is misspelled, it will not be
// pointed out. This checks readability, not grammar mistakes.

// Code Review was done by Jared Sexton on 10/28/2020
bool isPerfect(int wholeNumber) {
  if ((sqrt(wholeNumber) - floor(sqrt(wholeNumber))) != 0) {
    return false;
  } else {
    return true;
  }
} // USED IN: SMOG

double syllableCount(vector<string> entry) {
  string word;
  double numSyllables = 0;
  for (int i = 0; i < entry.size(); i++) {
    word = entry.at(i);
    for (int i = 0; i < word.size(); i++) {
      if (i != word.size() - 1) {
        if (((i == 0) && (word.size() == 6)) ||
            ((word.size() > 6) && (i + 5 < word.size()))) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
                (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
                (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
                (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
                (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
              if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'e') ||
                  (word.at(i + 2) == 'i') || (word.at(i + 2) == 'o') ||
                  (word.at(i + 2) == 'u') || (word.at(i + 2) == 'y') ||
                  (word.at(i + 2) == 'A') || (word.at(i + 2) == 'E') ||
                  (word.at(i + 2) == 'I') || (word.at(i + 2) == 'O') ||
                  (word.at(i + 2) == 'U') || (word.at(i + 2) == 'Y')) {
                if ((word.at(i + 3) == 'a') || (word.at(i + 3) == 'e') ||
                    (word.at(i + 3) == 'i') || (word.at(i + 3) == 'o') ||
                    (word.at(i + 3) == 'u') || (word.at(i + 3) == 'y') ||
                    (word.at(i + 3) == 'A') || (word.at(i + 3) == 'E') ||
                    (word.at(i + 3) == 'I') || (word.at(i + 3) == 'O') ||
                    (word.at(i + 3) == 'U') || (word.at(i + 3) == 'Y')) {
                  if ((word.at(i + 4) == 'a') || (word.at(i + 4) == 'e') ||
                      (word.at(i + 4) == 'i') || (word.at(i + 4) == 'o') ||
                      (word.at(i + 4) == 'u') || (word.at(i + 4) == 'y') ||
                      (word.at(i + 4) == 'A') || (word.at(i + 4) == 'E') ||
                      (word.at(i + 4) == 'I') || (word.at(i + 4) == 'O') ||
                      (word.at(i + 4) == 'U') || (word.at(i + 4) == 'Y')) {
                    if ((word.at(i + 5) == 'a') || (word.at(i + 5) == 'e') ||
                        (word.at(i + 5) == 'i') || (word.at(i + 5) == 'o') ||
                        (word.at(i + 5) == 'u') || (word.at(i + 5) == 'y') ||
                        (word.at(i + 5) == 'A') || (word.at(i + 5) == 'E') ||
                        (word.at(i + 5) == 'I') || (word.at(i + 5) == 'O') ||
                        (word.at(i + 5) == 'U') || (word.at(i + 5) == 'Y')) {
                      ++numSyllables;
                    }
                  }
                }
              }
            }
          }
        } else if (((i == 0) && (word.size() == 5)) ||
                   ((word.size() > 5) && (i + 4 < word.size()))) {
          if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
              (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
              (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
              (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
              (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
              (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
            if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'e') ||
                (word.at(i + 2) == 'i') || (word.at(i + 2) == 'o') ||
                (word.at(i + 2) == 'u') || (word.at(i + 2) == 'y') ||
                (word.at(i + 2) == 'A') || (word.at(i + 2) == 'E') ||
                (word.at(i + 2) == 'I') || (word.at(i + 2) == 'O') ||
                (word.at(i + 2) == 'U') || (word.at(i + 2) == 'Y')) {
              if ((word.at(i + 3) == 'a') || (word.at(i + 3) == 'e') ||
                  (word.at(i + 3) == 'i') || (word.at(i + 3) == 'o') ||
                  (word.at(i + 3) == 'u') || (word.at(i + 3) == 'y') ||
                  (word.at(i + 3) == 'A') || (word.at(i + 3) == 'E') ||
                  (word.at(i + 3) == 'I') || (word.at(i + 3) == 'O') ||
                  (word.at(i + 3) == 'U') || (word.at(i + 3) == 'Y')) {
                if ((word.at(i + 4) == 'a') || (word.at(i + 4) == 'e') ||
                    (word.at(i + 4) == 'i') || (word.at(i + 4) == 'o') ||
                    (word.at(i + 4) == 'u') || (word.at(i + 4) == 'y') ||
                    (word.at(i + 4) == 'A') || (word.at(i + 4) == 'E') ||
                    (word.at(i + 4) == 'I') || (word.at(i + 4) == 'O') ||
                    (word.at(i + 4) == 'U') || (word.at(i + 4) == 'Y')) {
                  ++numSyllables;
                }
              }
            }
          }
        } else if (((i == 0) && (word.size() == 4)) ||
                   ((word.size() > 4) && (i + 3 < word.size()))) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
                (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
                (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
                (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
                (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
              if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'e') ||
                  (word.at(i + 2) == 'i') || (word.at(i + 2) == 'o') ||
                  (word.at(i + 2) == 'u') || (word.at(i + 2) == 'y') ||
                  (word.at(i + 2) == 'A') || (word.at(i + 2) == 'E') ||
                  (word.at(i + 2) == 'I') || (word.at(i + 2) == 'O') ||
                  (word.at(i + 2) == 'U') || (word.at(i + 2) == 'Y')) {
                if ((word.at(i + 3) == 'a') || (word.at(i + 3) == 'e') ||
                    (word.at(i + 3) == 'i') || (word.at(i + 3) == 'o') ||
                    (word.at(i + 3) == 'u') || (word.at(i + 3) == 'y') ||
                    (word.at(i + 3) == 'A') || (word.at(i + 3) == 'E') ||
                    (word.at(i + 3) == 'I') || (word.at(i + 3) == 'O') ||
                    (word.at(i + 3) == 'U') || (word.at(i + 3) == 'Y')) {
                  ++numSyllables;
                }
              }
            }
          }
        } else if (((i == 0) && (word.size() == 3)) ||
                   ((word.size() > 3) && (i + 2 < word.size()))) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
                (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
                (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
                (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
                (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
              if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'e') ||
                  (word.at(i + 2) == 'i') || (word.at(i + 2) == 'o') ||
                  (word.at(i + 2) == 'u') || (word.at(i + 2) == 'y') ||
                  (word.at(i + 2) == 'A') || (word.at(i + 2) == 'E') ||
                  (word.at(i + 2) == 'I') || (word.at(i + 2) == 'O') ||
                  (word.at(i + 2) == 'U') || (word.at(i + 2) == 'Y')) {
                ++numSyllables;
              }
            }
          }
        } else if (((i == 0) && (word.size() == 2)) ||
                   ((word.size() > 2) && (i + 1 < word.size()))) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
                (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
                (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
                (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
                (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
              if (i > 0) {
                if ((word.at(i - 1) != 'a') && (word.at(i - 1) != 'e') &&
                    (word.at(i - 1) != 'i') && (word.at(i - 1) != 'o') &&
                    (word.at(i - 1) != 'u') && (word.at(i - 1) != 'y') &&
                    (word.at(i - 1) != 'A') && (word.at(i - 1) != 'E') &&
                    (word.at(i - 1) != 'I') && (word.at(i - 1) != 'O') &&
                    (word.at(i - 1) != 'U') && (word.at(i - 1) != 'Y')) {
                  ++numSyllables;
                }
              }
            }
          }
        } else if (((i == 0) && (word.size() == 1)) || (word.size() > 1)) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            ++numSyllables;
          }
        }

        if (i < (word.size() - 1)) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) != 'a') && (word.at(i + 1) != 'e') &&
                (word.at(i + 1) != 'i') && (word.at(i + 1) != 'o') &&
                (word.at(i + 1) != 'u') && (word.at(i + 1) != 'y') &&
                (word.at(i + 1) != 'A') && (word.at(i + 1) != 'E') &&
                (word.at(i + 1) != 'I') && (word.at(i + 1) != 'O') &&
                (word.at(i + 1) != 'U') && (word.at(i + 1) != 'Y') &&
                (word.at(i + 1) != '!' && (word.at(i + 1) != '?') &&
                 (word.at(i + 1) != '.'))) {
              ++numSyllables;
            }
          }
        }
        if ((word.size() == 3) && ((i + 1) == (word.size() - 1))) {
          if ((word.at(i - 1) != 'a') && (word.at(i - 1) != 'e') &&
              (word.at(i - 1) != 'i') && (word.at(i - 1) != 'o') &&
              (word.at(i - 1) != 'u') && (word.at(i - 1) != 'y') &&
              (word.at(i - 1) != 'A') && (word.at(i - 1) != 'E') &&
              (word.at(i - 1) != 'I') && (word.at(i - 1) != 'O') &&
              (word.at(i - 1) != 'U') && (word.at(i - 1) != 'Y')) {
            if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
                (word.at(i) == 'i') || (word.at(i) == 'o') ||
                (word.at(i) == 'u') || (word.at(i) == 'y') ||
                (word.at(i) == 'A') || (word.at(i) == 'E') ||
                (word.at(i) == 'I') || (word.at(i) == 'O') ||
                (word.at(i) == 'U') || (word.at(i) == 'Y')) {
              if ((word.at(i + 1) == '!') || (word.at(i + 1) == '?') ||
                  (word.at(i + 1) == '.')) {
                ++numSyllables;
              }
            }
          }
        }
        if ((word.size() == 4) && (i == 0)) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) == 'i') || (word.at(i + 1) == 'o') ||
                (word.at(i + 1) == 'u') || (word.at(i + 1) == 'y') ||
                (word.at(i + 1) == 'A') || (word.at(i + 1) == 'E') ||
                (word.at(i + 1) == 'I') || (word.at(i + 1) == 'O') ||
                (word.at(i + 1) == 'U') || (word.at(i + 1) == 'Y')) {
              if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'e') ||
                  (word.at(i + 2) == 'i') || (word.at(i + 2) == 'o') ||
                  (word.at(i + 2) == 'u') || (word.at(i + 2) == 'y') ||
                  (word.at(i + 2) == 'A') || (word.at(i + 2) == 'E') ||
                  (word.at(i + 2) == 'I') || (word.at(i + 2) == 'O') ||
                  (word.at(i + 2) == 'U') || (word.at(i + 2) == 'Y')) {
                if ((word.at(i + 3) == '!') || (word.at(i + 3) == '?') ||
                    (word.at(i + 3) == '.')) {
                  ++numSyllables;
                }
              }
            }
          }
        }
        // AO in a word (ex. Chaos)
        if (i + 2 < word.size()) {
          if ((word.at(i) == 'a') || (word.at(i) == 'A')) {
            if ((word.at(i + 1) == 'o') || (word.at(i + 1) == 'O')) {
              if ((word.at(i + 2) != '?') && (word.at(i + 2) != '.') &&
                  (word.at(i + 2) != '!')) {
                ++numSyllables;
              }
            }
          }
        }

        // -UO endings and insides (ex. Duo and Discontinuous)
        if (i + 2 < word.size()) {
          if ((word.at(i) == 'u') || (word.at(i) == 'U')) {
            if ((word.at(i + 1) == 'o') || (word.at(i + 1) == 'O')) {
              if ((word.at(i + 2) == '?') || (word.at(i + 2) == '.') ||
                  (word.at(i + 2) == '!')) {
                ++numSyllables;
                ++numSyllables;
              }
            }
          }
        }
        if (i + 2 < word.size()) {
          if ((word.at(i) == 'u') || (word.at(i) == 'U')) {
            if ((word.at(i + 1) == 'o') || (word.at(i + 1) == 'O')) {
              if ((word.at(i + 2) != '?') && (word.at(i + 2) != '.') &&
                  (word.at(i + 2) != '!')) {
                ++numSyllables;
              }
            }
          }
        }

        // -IO / -IA endings and insides (Ex (IO). Diode and Portfolio) & (Ex
        // (IA). and Claustrophobia)
        if (i + 2 < word.size()) {
          if ((word.at(i) != 'c') && (word.at(i) != 'C') &&
              (word.at(i) != 't') && (word.at(i) != 'T')) {
            if ((word.at(i + 1) == 'i') || (word.at(i + 1) == 'I')) {
              if ((word.at(i + 2) == 'o') || (word.at(i + 2) == 'O') ||
                  (word.at(i + 2) == 'a') || (word.at(i + 2) == 'A')) {
                ++numSyllables;
              }
            }
          }
        }
        if ((i + 2 < word.size() - 1) && (i - 1 > -1)) {
          if ((word.at(i - 1) != 'c') && (word.at(i - 1) != 'C') &&
              (word.at(i - 1) != 't') && (word.at(i - 1) != 'T')) {
            if ((word.at(i) == 'i') || (word.at(i) == 'I')) {
              if ((word.at(i + 1) == 'o') || (word.at(i + 1) == 'O') ||
                  (word.at(i + 1) == 'a') || (word.at(i + 1) == 'A') ||
                  (word.at(i + 1) == 'O')) {
                if ((word.at(i + 2) == '?') || (word.at(i + 2) == '.') ||
                    (word.at(i + 2) == '!')) {
                  ++numSyllables;
                }
              }
            }
          }
        }

        // OA's (In English, all words with OA in them are given 2 syllables)
        if ((i + 1 < word.size()) && (i - 1 > -1)) {
          if ((word.at(i - 1) != 'c') && (word.at(i - 1) != 'C') &&
              (word.at(i - 1) != 'h') && (word.at(i - 1) != 'H')) {
            if ((word.at(i) == 'o') || (word.at(i) == 'O')) {
              if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'A')) {
                ++numSyllables;
              }
            }
          }
        }
        if ((i + 2 < word.size()) && (i - 1 > -1)) {
          if ((word.at(i - 1) != 'c') && (word.at(i - 1) != 'C') &&
              (word.at(i - 1) != 'h') && (word.at(i - 1) != 'H')) {
            if ((word.at(i) == 'o') || (word.at(i) == 'O')) {
              if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'A')) {
                if ((word.at(i + 2) == '?') || (word.at(i + 2) == '.') ||
                    (word.at(i + 2) == '!')) {
                  ++numSyllables;
                }
              }
            }
          }
        }

        // -by endings
        if ((i + 2) == (word.size() - 1)) {
          if ((word.at(i) == 'b') || (word.at(i) == 'B')) {
            if ((word.at(i + 1) == 'y') || (word.at(i + 1) == 'Y')) {
              if ((word.at(i + 2) == '!') || (word.at(i + 2) == '?') ||
                  (word.at(i + 2) == '.')) {
                ++numSyllables;
                ++numSyllables;
              }
            }
          }
        }
        if (i + 1 == (word.size() - 1)) {
          if ((word.at(i) == 'b') || (word.at(i) == 'B')) {
            if ((word.at(i + 1) == 'y') || (word.at(i + 1) == 'Y')) {
              ++numSyllables;
            }
          }
        }

        // -LE endings
        if (word.size() > 3) {
          if ((i + 2) == word.size() - 1) {
            if (((word.at(i) > 64) && (word.at(i) < 91)) ||
                ((word.at(i) > 96) && (word.at(i) < 123))) {
              if ((word.at(i + 1) == 'l') || (word.at(i + 1) == 'L')) {
                if ((word.at(i + 2) == 'e') || (word.at(i + 2) == 'E')) {
                  ++numSyllables;
                }
              }
            }
          }
        }
        if (word.size() > 3) {
          if ((i + 3) == word.size() - 1) {
            if (((word.at(i) > 64) && (word.at(i) < 91)) ||
                ((word.at(i) > 96) && (word.at(i) < 123))) {
              if ((word.at(i + 1) == 'l') || (word.at(i + 1) == 'L')) {
                if ((word.at(i + 2) == 'e') || (word.at(i + 2) == 'E')) {
                  if ((word.at(i + 3) == '!') || (word.at(i + 3) == '?') ||
                      (word.at(i + 3) == '.')) {
                    ++numSyllables;
                  }
                }
              }
            }
          }
        }

        // -IVE ENDINGS
        if (word.size() > 4) {
          if ((i + 3) < word.size() - 1) {
            if ((word.at(i) == 'i') || (word.at(i) == 'I')) {
              if ((word.at(i + 1) == 'v') || (word.at(i + 1) == 'V')) {
                if ((word.at(i + 2) == 'e') || (word.at(i + 2) == 'E')) {
                  if ((word.at(i + 3) != '!') && (word.at(i + 3) != '?') &&
                      (word.at(i + 3) != '.')) {
                    --numSyllables;
                  }
                }
              }
            }
          }
        }

        // CONSONANTS
        if ((i == (word.size() - 2)) &&
            (((word.at(i) == 't') || (word.at(i) == 'T')) ||
             ((word.at(i) == 'd') || (word.at(i) == 'D')) ||
             ((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if (word.at(i + 1) == 'y') {
            ++numSyllables;
          }
        }
        if ((i == (word.size() - 3)) &&
            (((word.at(i) == 't') || (word.at(i) == 'T')) ||
             ((word.at(i) == 'd') || (word.at(i) == 'D')) ||
             ((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if (word.at(i + 1) == 'y') {
            if ((word.at(i + 2) == '.') || (word.at(i + 2) == '!') ||
                (word.at(i + 2) == '?')) {
              ++numSyllables;
            }
          }
        }
        if ((i == (word.size() - 3)) &&
            (((word.at(i) == 't') || (word.at(i) == 'T')) ||
             ((word.at(i) == 'd') || (word.at(i) == 'D')) ||
             ((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if (word.at(i + 2) == 'y') {
            ++numSyllables;
          }
        }
        if ((i == (word.size() - 3)) &&
            (((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if ((word.at(i + 1) == 'l') || (word.at(i + 1) == 'L')) {
            if (word.at(i + 2) == 'y') {
              --numSyllables;
            }
          }
        }
        if ((i == (word.size() - 4)) &&
            (((word.at(i) == 't') || (word.at(i) == 'T')) ||
             ((word.at(i) == 'd') || (word.at(i) == 'D')) ||
             ((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if ((word.at(i + 2) == 'y') || (word.at(i + 2) == 'Y')) {
            if ((word.at(i + 3) == '.') || (word.at(i + 3) == '!') ||
                (word.at(i + 3) == '?')) {
              ++numSyllables;
            }
          }
        }
        if ((i == (word.size() - 4)) &&
            (((word.at(i) == 't') || (word.at(i) == 'T')) ||
             ((word.at(i) == 'd') || (word.at(i) == 'D')) ||
             ((word.at(i) == 'l') || (word.at(i) == 'L')))) {
          if ((word.at(i + 1) == 'l') || (word.at(i + 1) == 'L')) {
            if ((word.at(i + 2) == 'y') || (word.at(i + 2) == 'Y')) {
              if ((word.at(i + 3) == '.') || (word.at(i + 3) == '!') ||
                  (word.at(i + 3) == '?')) {
                --numSyllables;
              }
            }
          }
        }

        if (i == (word.size() - 1)) {
          if ((word.size() > 3) && (i - 2 > -1)) {
            if ((word.at(i) == '.') || (word.at(i) == '!') ||
                (word.at(i) == '?')) {
              if ((word.at(i - 1) == 'a') || (word.at(i - 1) == 'e') ||
                  (word.at(i - 1) == 'i') || (word.at(i - 1) == 'o') ||
                  (word.at(i - 1) == 'u') || (word.at(i - 1) == 'y') ||
                  (word.at(i - 1) == 'A') || (word.at(i - 1) == 'E') ||
                  (word.at(i - 1) == 'I') || (word.at(i - 1) == 'O') ||
                  (word.at(i - 1) == 'U') || (word.at(i - 1) == 'Y')) {
                if ((word.at(i - 2) != 'a') || (word.at(i - 2) != 'e') ||
                    (word.at(i - 2) != 'i') || (word.at(i - 2) != 'o') ||
                    (word.at(i - 2) != 'u') || (word.at(i - 2) != 'y') ||
                    (word.at(i - 2) != 'A') || (word.at(i - 2) != 'E') ||
                    (word.at(i - 2) != 'I') || (word.at(i - 2) != 'O') ||
                    (word.at(i - 2) != 'U') || (word.at(i - 2) != 'Y')) {
                  --numSyllables;
                }
              }
            }
          }
        }

        if (i == (word.size() - 1)) {
          if (word.size() > 2) {
            if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
                (word.at(i) == 'i') || (word.at(i) == 'o') ||
                (word.at(i) == 'u') || (word.at(i) == 'y') ||
                (word.at(i) == 'A') || (word.at(i) == 'E') ||
                (word.at(i) == 'I') || (word.at(i) == 'O') ||
                (word.at(i) == 'U') || (word.at(i) == 'Y')) {
              --numSyllables;
            }
          }
        }
      }

      if (word.size() == 1) {
        if ((word.at(i) == 'a') || (word.at(i) == 'e') || (word.at(i) == 'i') ||
            (word.at(i) == 'o') || (word.at(i) == 'u') || (word.at(i) == 'y') ||
            (word.at(i) == 'A') || (word.at(i) == 'E') || (word.at(i) == 'I') ||
            (word.at(i) == 'O') || (word.at(i) == 'U') || (word.at(i) == 'Y')) {
          ++numSyllables;
        }
      }

      if (word.size() == 2) {
        if (i == 0) {
          if ((word.at(i) == 'a') || (word.at(i) == 'e') ||
              (word.at(i) == 'i') || (word.at(i) == 'o') ||
              (word.at(i) == 'u') || (word.at(i) == 'y') ||
              (word.at(i) == 'A') || (word.at(i) == 'E') ||
              (word.at(i) == 'I') || (word.at(i) == 'O') ||
              (word.at(i) == 'U') || (word.at(i) == 'Y')) {
            if ((word.at(i + 1) != 'a') || (word.at(i + 1) == 'e') ||
                (word.at(i + 1) != 'i') || (word.at(i + 1) != 'o') ||
                (word.at(i + 1) != 'u') || (word.at(i + 1) != 'y') ||
                (word.at(i + 1) != 'A') || (word.at(i + 1) != 'E') ||
                (word.at(i + 1) != 'I') || (word.at(i + 1) != 'O') ||
                (word.at(i + 1) != 'U') || (word.at(i + 1) != 'Y')) {
              if ((word.at(i + 1) == '!') || (word.at(i + 1) == '?') ||
                  (word.at(i + 1) == '.')) {
                ++numSyllables;
              }
            }
          }
        }
      }
    }
    if (word.size() >= 3) {
      if (((word.at(word.size() - 1) == 'e') ||
           (word.at(word.size() - 1) == 'E')) &&
          ((word.at(word.size() - 2) == 'h') ||
           (word.at(word.size() - 2) == 'H')) &&
          ((word.at(word.size() - 3) == 't') ||
           (word.at(word.size() - 3) == 'T'))) {
        ++numSyllables;
      }
    }
    if (word.size() >= 4) {
      if (((word.at(word.size() - 1) == '.') ||
           (word.at(word.size() - 1) == '!') ||
           (word.at(word.size() - 1) == '?')) &&
          ((word.at(word.size() - 2) == 'e') ||
           (word.at(word.size() - 2) == 'E')) &&
          ((word.at(word.size() - 3) == 'h') ||
           (word.at(word.size() - 3) == 'H')) &&
          ((word.at(word.size() - 4) == 't') ||
           (word.at(word.size() - 4) == 'T'))) {
        ++numSyllables;
      }
    }
  }
  return numSyllables;
}
// Returns numSyllables.
// USED IN: Everything

vector<string> extractWord(string entry) {
  int waypoint = 0;
  vector<string> words;
  for (int i = 0; i < entry.size(); i++) {
    if (entry.at(i) == ' ') {
      if (i != entry.size() - 1) {
        string word = entry.substr(waypoint, (i - waypoint));
        words.push_back(word);
        waypoint = (i + 1);
      }
    }
    if (i == entry.size() - 1) {
      if ((entry.at(i) == '.') || (entry.at(i) == '?') ||
          (entry.at(i) == '!')) {
        string word = entry.substr(waypoint, (i - waypoint + 1));
        words.push_back(word);
      }
    }
  }
  return words;
} // DOESN'T NEED TO TAKE INTO ACCOUNT TRAILING PERIODS...
// Returns words. (Used in wordStorage)
// USED IN: Everything

vector<string> extractSentence(string entry) {
  int waypoint = 0;
  string sentence;
  vector<string> sentences;
  for (int i = 0; i < entry.size(); i++) {
    if ((entry.at(i) == '.') || (entry.at(i) == '!') || (entry.at(i) == '?')) {
      if (i != entry.size() - 1) {
        if ((entry.at(i + 1) != '.') && (entry.at(i + 1) != '!') &&
            (entry.at(i + 1) != '?')) {
          if (((i + 1) < entry.size()) &&
              (((entry.at(i - 1) > 64) && (entry.at(i - 1) < 91)) ||
               ((entry.at(i - 1) > 96) && (entry.at(i - 1) < 123))) &&
              ((entry.at(i) == '?') || (entry.at(i) == '.') ||
               (entry.at(i) == '!')) &&
              !(((entry.at(i + 1) > 64) && (entry.at(i + 1) < 91)) ||
                ((entry.at(i + 1) > 96) && (entry.at(i + 1) < 123)))) {
            if (((i - 2) > -1) &&
                ((entry.at(i) == '?') || (entry.at(i) == '.') ||
                 (entry.at(i) == '!')) &&
                (((entry.at(i - 1) > 64) && (entry.at(i - 1) < 91)) ||
                 ((entry.at(i - 1) > 96) && (entry.at(i - 1) < 123))) &&
                ((entry.at(i - 2) != '?') && (entry.at(i - 2) != '.') &&
                 (entry.at(i - 2) != '!'))) {
              sentence = entry.substr(waypoint, (i - waypoint + 1));
              waypoint = i + 2;
              sentences.push_back(sentence);
            }
          }
        }
      }
      if (i == entry.size() - 1) {
        if ((entry.at(i) == '.') || (entry.at(i) == '?') ||
            (entry.at(i) == '!')) {
          sentence = entry.substr(waypoint, (i - waypoint + 1));
          sentences.push_back(sentence);
        }
      }
    }
  }
  return sentences;
} // THS TAKES INTO ACCOUNT TRAILING PERIODS...
// USED IN: Everything

int longSentenceTracker(vector<string> entry) {
  string sentence;
  double longSengenceCounter = 0;
  for (int i = 0; i < entry.size(); i++) {
    sentence = entry.at(i);
    if (sentence.size() >= 50) {
      ++longSengenceCounter;
    }
  }

  return longSengenceCounter;
} // This calculates the amount of sentences that are 'long'.
// USED IN: Requirement

int letterDigitCounter(string entry) {
  int letters = entry.size();
  for (int i = 0; i < entry.size(); i++) {
    if (((entry.at(i) > 31) && (entry.at(i) < 47)) ||
        ((entry.at(i) > 58) && (entry.at(i) < 65)) ||
        ((entry.at(i) > 90) && (entry.at(i) < 97)) ||
        ((entry.at(i) > 122) && (entry.at(i) < 127))) {
      --letters;
    }
  }
  return letters;
} // This calculates the amount of letters and digits in an entry.
// USED IN:
// CLI
// ARI

double polysyllableCounter(vector<string> entry) {
  int polySCount = 0;
  string word;
  for (int i = 0; i < entry.size(); i++) {
    word = entry.at(i);
    if ((i + 2) < word.size()) {
      if ((word.at(i) == 'a') || (word.at(i) == 'A') || (word.at(i) == 'e') ||
          (word.at(i) == 'E') || (word.at(i) == 'i') || (word.at(i) == 'I') ||
          (word.at(i) == 'o') || (word.at(i) == 'O') || (word.at(i) == 'u') ||
          (word.at(i) == 'U') || (word.at(i) == 'y') || (word.at(i) == 'Y')) {
        if ((word.at(i + 1) == 'a') || (word.at(i + 1) == 'A') ||
            (word.at(i + 1) == 'e') || (word.at(i + 1) == 'E') ||
            (word.at(i + 1) == 'i') || (word.at(i + 1) == 'I') ||
            (word.at(i + 1) == 'o') || (word.at(i + 1) == 'O') ||
            (word.at(i + 1) == 'u') || (word.at(i + 1) == 'U') ||
            (word.at(i + 1) == 'y') || (word.at(i + 1) == 'Y')) {
          if ((word.at(i + 2) == 'a') || (word.at(i + 2) == 'A') ||
              (word.at(i + 2) == 'e') || (word.at(i + 2) == 'E') ||
              (word.at(i + 2) == 'i') || (word.at(i + 2) == 'I') ||
              (word.at(i + 2) == 'o') || (word.at(i + 2) == 'O') ||
              (word.at(i + 2) == 'u') || (word.at(i + 2) == 'U') ||
              (word.at(i + 2) == 'y') || (word.at(i + 2) == 'Y')) {
            ++polySCount;
          }
        }
      }
    }
  }
  return polySCount;
} // This calculates the amount of polysyllables in an entry.
// USED IN:
// SMOG
// GFI

// Uses the amount of letters, words and senteces to calculate readability.
double CLI(double letters, double words, double sentences) {
  double L = 0;
  double S = 0;
  double CLS = 0;
  L = ((letters / words) * 100);
  S = ((sentences / words) * 100);
  CLS = ((0.0588 * L) - (0.296 * S) - 15.8);
  return CLS;
}

// Uses amount of polysyllables (words with 3 or more consecutive vowels) and
// sentences to calculate readability.
double SMOG(double polySCount, double sentences) {
  double SMOGResult = 0;
  int squareRoot = sqrt(polySCount * (30 / sentences));
  int original = squareRoot * squareRoot;
  int above = original;
  int below = original;
  if (isPerfect(original)) {
    squareRoot = sqrt(original);
  } else {
    while (!isPerfect(original)) {
      ++above;
      if (isPerfect(above)) {
        original = above;
        break;
      }
      --below;
      if (isPerfect(below)) {
        original = below;
        break;
      }
    }
  }
  int aboveDif = above - original;
  int belowDif = original - below;
  if (aboveDif < belowDif) {
    squareRoot = sqrt(above);
  }
  if (aboveDif > belowDif) {
    squareRoot = sqrt(below);
  }

  SMOGResult = ((1.0430 * squareRoot) + 3.1291);

  return SMOGResult;
}

// Uses amount of characters, words and sentences to calculate readability.
int ARI(double characters, double words, double sentences) {
  double ARIResult = 0;
  ARIResult =
      (((4.71 * (characters / words)) + (0.5 * (words / sentences)) - 21.43));
  ARIResult = ceil(ARIResult);

  return ARIResult;
}

// Uses amount of words, sentences and syllables to calculate readability.
double FRE1(double words, double sentences, double syllables) {
  double FREResult = 0;
  FREResult =
      (206.835 - (1.015 * (words / sentences)) - (84.6 * (syllables / words)));

  return FREResult;
}

// Uses amount of words, sentences and syllables to calculate grade level.
double FRE2(double words, double sentences, double syllables) {
  double FKGLResult = 0;
  FKGLResult =
      ((0.39 * (words / sentences)) + (11.8 * (syllables / words)) - 15.59);

  return FKGLResult;
}

// Uses amount of polysyllables, words and the average sentence length to
// calculate readability.
double GFI(double avgSentLength, double polysyllables, double words) {
  double GFIResult = 0;
  GFIResult = (0.4 * (avgSentLength + (100 * (polysyllables / words))));

  return GFIResult;
}

// Main Function:
int main() {
  char goAgain = 'n';
  const char debug = 'n';
  string test;

  do {
    cout << "Enter a sentence: ";
    getline(cin, test);
    if ((goAgain == 'y') || (goAgain == 'Y')) {
      getline(cin, test);
    }
    cout << endl;

    // Stores sentences in a vector given an input sentence.
    // If the sentence has a period at the end, it will be registered.
    vector<string> sentenceStorage = extractSentence(test);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Storing sentences..." << endl;
    }

    // Stores words in a vector given an input sentence.
    // So long as there is a space after (or between) words, it will be
    // registered.
    vector<string> wordStorage = extractWord(test);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Storing words..." << endl;
    }

    // Counts the amount of sentences in the sentenceStorage vector.
    // If there is a period at the end, the sentence will be counted.
    double sentenceCount = sentenceStorage.size();
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Counting sentences..." << endl;
    }

    // Counts the amount of words in a vector.
    // So long as there is a space after (or between) words, it will be
    // counted.
    double wordCount = wordStorage.size();
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Counting words..." << endl;
    }

    // Counts the amount of letters and digits in an entry.
    double letterDigitCount = letterDigitCounter(test);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Counting letters and digits..." << endl;
    }

    // Counts the amount of syllables and in a vector.
    double numSyllables = syllableCount(wordStorage);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Counting syllables..." << endl;
    }

    // Counts the average words per sentence.
    double avgWordsPS = (wordCount / sentenceCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating average words per sentence..." << endl;
    }

    // Counts the average amount of syllables per total words.
    double avgSyllablesPW = (numSyllables / wordCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating average syllables per word..." << endl;
    }

    // Counts the amount of polysyllables in total.
    double polySCount = polysyllableCounter(wordStorage);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating number of polysyllables..." << endl;
    }

    // Counts the amount sentences that are considered 'long'.
    double longSentences = longSentenceTracker(sentenceStorage);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating sentence lengths and determining if they are "
              "'long'..."
           << endl;
    }

    // Counts the percentage of 'long' sentences in an entry.
    double percentLongSentences =
        ((longSentences / sentenceStorage.size()) * 100);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating percentage of long sentences in entry..." << endl;
    }

    // Calculates readability and grade level using the index provided.
    double CLIResult = CLI(letterDigitCount, wordCount, sentenceCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating readability using the Coleman-Liau Index..." << endl;
    }

    // Calculates readability using the index provided.
    // If the entry is under 30 sentences, it is not used.
    double SMOGResult = SMOG(polySCount, sentenceCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating readability using SMOG..." << endl;
      if (sentenceCount < 30) {
        cout << "  SMOG unable to be used. A minimum of 30 sentences are "
                "required."
             << endl;
      }
    }

    // Calculates readability using the index provided.
    int ARIResult = ARI(letterDigitCount, wordCount, sentenceCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating readability using the Automated Readability Index..."
           << endl;
    }

    // Calculates readability using the index provided.
    double FREResult = FRE1(wordCount, sentenceCount, numSyllables);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "Calculating readability using the Flesch Reading-Ease Test..."
           << endl;
    }

    // Calculates grade level using the index provided.
    double FKGLResult = FRE2(wordCount, sentenceCount, numSyllables);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "  Calculating grade level using the Flesch-Kincaid Grade Level "
              "Test..."
           << endl;
    }

    // Calculates readability using the index provided.
    double GFIResult = GFI(avgWordsPS, polySCount, wordCount);
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "  Calculating readability using the Gunning Fog Index..."
           << endl;
      cout << "Done! Here are your results:" << endl;
    }
    cout << endl;

    // Outputs extra information about the entry if the global debug constant is
    // Y or y.
    if ((debug == 'y') || (debug == 'Y')) {
      cout << "There are " << sentenceCount << " sentences in this entry."
           << endl;
      cout << "There are " << wordCount << " words in this entry." << endl;
      cout << "There are " << letterDigitCount
           << " letters and digits in this entry." << endl;
      cout << "There are " << numSyllables << " syllables in this entry."
           << endl;
      cout << "There are " << polySCount << " polysyllables in this entry."
           << endl;
      cout << "There are " << test.size() << " characters in this entry."
           << endl;
    }

    // Outputs the required information for the project.
    cout << "The average sentence length in words is: " << avgWordsPS
         << " words." << endl;
    cout << "The average word length in syllables is: " << avgSyllablesPW
         << " syllables." << endl;
    cout << percentLongSentences << "% "
         << " of the sentences are considered 'long'." << endl;
    cout << "  Long is defined by any sentence over 50 characters." << endl;
    cout << "The readability of this entry using the Coleman-Liau Index is: "
         << setprecision(3) << CLIResult << endl;
    cout << "  The grade level of the entry using the Coleman-Liau Index is: "
         << setprecision(3) << CLIResult << endl;
    if (sentenceCount >= 30) {
      cout << "The readability of this entry using SMOG is: " << setprecision(3)
           << SMOGResult << endl;
    }
    cout << "The readability of this entry using the Automated Readability "
            "Index is: "
         << setprecision(3) << ARIResult << endl;
    cout << "The readability of this entry using the Flesch Reading-Ease Test "
            "is: "
         << setprecision(3) << FREResult << endl;
    cout << "  The grade level of the entry using the Flesch-Kincaid Test is: "
         << FKGLResult << endl;
    cout << "The readability of this entry using the Gunning Fog Index is: "
         << setprecision(3) << GFIResult << endl
         << endl;

    // Prompts the user and asks if they want to go again.
    // If Y or y, the entire test begins again.
    cout << "Do you want to check another entry? (y/n): ";
    cin >> goAgain;
    do {
      if ((goAgain != 'y') && (goAgain != 'Y') && (goAgain != 'n') &&
          (goAgain != 'N')) {
        cout << "That is not a valid option. Please enter again (y/n): ";
        cin >> goAgain;
      }
    } while ((goAgain != 'y') && (goAgain != 'Y') && (goAgain != 'n') &&
             (goAgain != 'N'));
  } while ((goAgain == 'y') || (goAgain == 'Y'));
  return 0;
}
