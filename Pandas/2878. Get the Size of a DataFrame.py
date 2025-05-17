import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    
    # shape --> returns a tuple (rows, colum)
    return list(players.shape)



'''
Comments
  function acceps a argument "players" which is of "dataframe" type --> and expected to return a 'list' 
  Note "List (capital L)" --> just denotes that it returns list --> we have to return 'list (l -> lowercase)' 
'''
