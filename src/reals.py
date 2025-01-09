from itertools import chain, combinations
from random import shuffle
import plotly.express as px
import pandas as pd

def powerset(iterable):
    "powerset([1,2,3]) --> () (1,) (2,) (3,) (1,2) (1,3) (2,3) (1,2,3)"
    s = list(iterable)
    return chain.from_iterable(combinations(s, r) for r in range(len(s)+1))

bit_vals = [1/2, 1/4, 1/8, 1/16, 1/32, 1/64, 1/128, 1/256]
all_vals = [(sum(n),0) for n in powerset(bit_vals)]
all_vals.sort()
df = pd.DataFrame(all_vals,columns=['x','y'])

#fig = px.scatter(x=df["x"], y=df["y"], title='One Byte Fixed-Point Values')
#fig.show()



