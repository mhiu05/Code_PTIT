import math

class Ps:
    def __init__(self, ts, ms):
        self.ts = ts
        self.ms = ms

    def output(self):
        t = self.ts // math.gcd(self.ts, self.ms)
        m = self.ms // math.gcd(self.ts, self.ms)
        ans = str(t) + "/" + str(m)
        return ans
    
if __name__ == "__main__":
    ts, ms = map(int, input().split())    
    a = Ps(ts, ms)

    print(a.output())