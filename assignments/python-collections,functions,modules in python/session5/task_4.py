team = {
    "CSK": {
        "captain": "Dhoni",
        "players": 18
    },
    "MI": {
        "captain": "Rohit",
        "players": 17
    }
}

team["GT"] = {
    "captain": "Hardik",
    "players": 16
}

for i in team:
    print(i, "-", team[i]["captain"])