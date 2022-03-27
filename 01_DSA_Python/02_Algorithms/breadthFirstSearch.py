from collections import deque

graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggym"] = []
graph["thom"] = []
graph["jonny"] = []



#  Algorithm implementation

def BreadthFirstSearch(name):
    search_queue = deque()
    search_queue += graph["you"]
    searched = []
    while search_queue:
        person = search_queue.pop()
        if not person in searched:
            if person_is_seller(person):
                print (person + " is a mango seller.")
                return True
            else:
                search_queue += graph[person]
                searched.append(person)
    return False


def person_is_seller(name): return name[-1] == 'm'

BreadthFirstSearch("you")