
def numberOfMatches( n: int) -> int:
    games=0
    teams=n

    while teams > 1:
        # even teams
        if teams%2==0:
            teams//=2
            games+=teams
        # odd teams
        else:
            teams=(teams+1)//2
            games+=teams-1
    return games

print(numberOfMatches(14)) # Expected: 13

'''
You are given an integer n, the number of teams in a tournament that has strange rules:

    If the current number of teams is even, each team gets paired with another team. 
    A total of n / 2 matches are played, and n / 2 teams advance to the next round.
    If the current number of teams is odd, one team randomly advances in the tournament, and the rest gets paired. 
    A total of (n - 1) / 2 matches are played, and (n - 1) / 2 + 1 teams advance to the next round.

Return the number of matches played in the tournament until a winner is decided.
'''
