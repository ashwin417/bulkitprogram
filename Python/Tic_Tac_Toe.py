board={
    'T1': ' ', 'T2': ' ', 'T3': ' ',
    'M1': ' ', 'M2': ' ', 'M3': ' ',
    'D1': ' ', 'D2': ' ', 'D3': ' ',
}
player = 1
total_move=0
def check():
    if board['T1']=='X' and board['T2']=='X' and board['T3']=='X':
        print('Player one won!')
        return 1
    elif board['M1']=='X' and board['M2']=='X' and board['M3']=='X':
        print('Player one won!')
        return 1
    elif board['D1']=='X' and board['D2']=='X' and board['D3']=='X':
        print('Player one won!')
        return 1
    elif board['T1']=='X' and board['M2']=='X' and board['D3']=='X':
        print('Player one won!')
        return 1
    elif board['T1']=='X' and board['M1']=='X' and board['D1']=='X':
        print('Player one won!')
        return 1
    elif board['T2']=='X' and board['M2']=='X' and board['D2']=='X':
        print('Player one won!')
        return 1
    elif board['T3']=='X' and board['M3']=='X' and board['D3']=='X':
        print('Player one won!')
        return 1
        
        
        
    if board['T1']=='0' and board['T2']=='0' and board['T3']=='0':
        print('Player two won!')
        return 1
    elif board['M1']=='0' and board['M2']=='0' and board['M3']=='0':
        print('Player two won!')
        return 1
    elif board['D1']=='0' and board['D2']=='0' and board['D3']=='0':
        print('Player two won!')
        return 1
    elif board['T1']=='0' and board['M2']=='0' and board['D3']=='0':
        print('Player two won!')
        return 1
    elif board['T1']=='0' and board['M1']=='0' and board['D1']=='0':
        print('Player two won!')
        return 1
    elif board['T2']=='0' and board['M2']=='0' and board['D2']=='0':
        print('Player two won!')
        return 1
    elif board['T3']=='0' and board['M3']=='0' and board['D3']=='0':
        print('Player two won!')
        return 1
    return 0
print('RULES')
print('*****')
print('Enter T1 for entering input to the 1st slot of 1st row')
print('Enter T2 for entering input to the 2nd slot of 1st row')
print('Enter T3 for entering input to the 3rd slot of 1st row')
print('Enter M1 for entering input to the 1st slot of 2nd row')
print('Enter M2 for entering input to the 2nd slot of 2nd row')
print('Enter M3 for entering input to the 3rd slot of 2nd row')
print('Enter D1 for entering input to the 1st slot of 3rd row')
print('Enter D2 for entering input to the 2nd slot of 3rd row')
print('Enter D3 for entering input to the 3rd slot of 3rd row')
print()
print('T1|T2|T3')
print('- +- +-')
print('M1|M2|M3')
print('- +- +-')
print('D1|D2|D3')
print('- +- +-')
print()
print('Now,the Game begins...')
print()
print('Board')
print('*****')
print()

while True:
    print(board['T1']+'|'+board['T2']+'|'+board['T3'])
    print('-+-+-')
    print(board['M1']+'|'+board['M2']+'|'+board['M3'])
    print('-+-+-')
    print(board['D1']+'|'+board['D2']+'|'+board['D3'])
    end_check = check()
    if total_move==9 or end_check==1:
        break
    while True:
        if player==1:
            p1_input=input('Player one ')
            if p1_input.upper() in board and board[p1_input.upper()] == ' ':
                board[p1_input.upper()]='X'
                player=2
                break
            else:
                print('Invalid input,please try again')
                continue
        else:
            p2_input=input('Player two ')
            if p2_input.upper() in board and board[p2_input.upper()] == ' ':
                board[p2_input.upper()]='0'
                player=1
                break
            else:
                print('Invalid input,please try again')
                continue
    total_move+=1
    print('*************')
    print()
    

        
    
    
    
                
            
                
                
                
    
