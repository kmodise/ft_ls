# ft_ls
about : ft_ls is a BASIC recreation of the unix command "ls" using C

can do 👍 : [~ls -l]
            [~ls -a]
            [~ls -r]
                    [~ls -R]
                    [~ls]
                    [~ls (multiple directories)]
                    [~ls -l (multiple files)]
                    [[~ls -a -l] / [ls -a -r] etc.]
ft_ls can only combine 2 flags at a time, the '-R' flag however still needs work, and can't be combined with any other flags.

can't do 👎 :    combine more than 2 flags
                          the -l flag only works on the current directory
                          there is no block size displayed
                          despite no visible bugs (the '-t' flag doesn't work)

This project was done following the following rules : 1. File must have a maximum of 5;
                                                                                         2. Function must have a maximum of 25 lines;
                                                                                         3. Function must have a maximum of 5 variables;
                                                                                         4. NO memory leaks
                                                                                         5. You have to use your own library(libft)
                                                                                         6. a load more rule                                                                                      
    I could go on and fix it and make it better, but I have more projects that I have to do and time doesn't like me<sad face emoji>
