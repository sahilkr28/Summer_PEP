/*
floyd loop detection - 
part 1 -> detect if loop exist
        fast & slow pointer approach
        init fast & slow at head 
        move slow by 1 step and fast by 2 step untl fast
        becomes null or fast next becomes null
        if fast and slow becomes equal, loop exit
        
part 2 -> if loops exists, remove loop
        re init slow at head again, keep fast at same place
        move slow and fast by 1 step, where they intersected call it I. */