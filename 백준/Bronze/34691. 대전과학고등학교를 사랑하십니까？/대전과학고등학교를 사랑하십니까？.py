import sys

scientific_names = {
    "animal": "Panthera tigris",
    "tree": "Pinus densiflora",
    "flower": "Forsythia koreana"
}

for line in sys.stdin:
    query = line.strip()
    
    if query == "end":
        break
    
    if query in scientific_names:
        print(scientific_names[query])