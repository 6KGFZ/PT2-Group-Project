// Scoreboard.hpp
#ifndef SCOREBOARD_HPP
#define SCOREBOARD_HPP

class Scoreboard {
private:
    int score;
public:
    Scoreboard();
    void show();
    void calculate(int points);
    void reset();
    int getScore() const;
};

#endif
