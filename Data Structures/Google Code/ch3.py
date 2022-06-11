def game_status(board_size, board):

    # get counts
    R_count = 0
    B_count = 0
    for r in range(board_size):
        for c in range(board_size):
            if board[r][c] == 'R':
                R_count += 1
            elif board[r][c] == 'B':
                B_count += 1

    if abs(R_count - B_count) > 1:
        return "Impossible"

    B_wins = 0
    for r in range(board_size):
        wins = bfs(r, 0, 'B', board_size, board)
        print("Blue wins", wins)

    R_wins = 0
    for c in range(board_size):
        wins = bfs(0, c, 'R', board_size, board)
        print("Red wins", wins)

    print("Blue", B_count, B_wins)
    print("Red", R_count, R_wins)
    if B_wins and R_wins:
        return "Impossible"
    elif B_wins > 1 or R_wins > 1:
        return "Impossible"
    elif B_wins and B_count < R_count:
        return "Impossible"
    elif R_wins and R_count < B_count:
        return "Impossible"
    elif B_wins:
        return "Blue"
    elif R_wins:
        return "Red"
    else:
        return "Nobody"


# Need to return number of times we win
def bfs(r, c, letter, board_size, board):
    # 6 directions because of Hex

    if board[r][c] != letter:
        return 0

    directions = [(0, -1), (0, 1), (1, -1), (1, 0), (-1, -1), (-1, 0)]

    seen = set()
    seen.add((r, c))
    q = [(r, c)]
    wincount = 0

    while q:
        curr = q.pop(0)
        if letter == 'R' and curr[0] == board_size-1:
            wincount += 1
        elif letter == 'B' and curr[1] == board_size-1:
            wincount += 1
        else:
            for d in directions:
                nr = curr[0] + d[0]
                nc = curr[1] + d[1]
                if 0 <= nr < board_size and 0 <= nc < board_size \
                        and (nr, nc) not in seen and board[nr][nc] == letter:
                    seen.add((nr, nc))
                    q.append((nr, nc))

    return wincount


def main():
    test_cases = int(input())
    for test_case in range(1, test_cases + 1, 1):
        board_size = int(input())
        board = []
        for _ in range(board_size):
            board.append(list(input().strip()))

        ans = game_status(board_size, board)

        print("Case #{}: {}".format(test_case, ans))


if __name__ == "__main__":
    main()
