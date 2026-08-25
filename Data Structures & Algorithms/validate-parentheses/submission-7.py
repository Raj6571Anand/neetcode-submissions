class Solution:
    def isValid(self, s: str) -> bool:
        if(len(s)%2!=0):
            return False
            
        st=[]
        
        for i in range(len(s)):
            if (s[i]=='[' or s[i]=='(' or s[i]=='{'):
                st.append(s[i])
            elif (s[i]==']'):
                if (len(st)==0):
                    return False
                elif(st[-1]=='['):
                    st.pop()
                else:
                    return False
            elif (s[i]=='}'):
                if (len(st)==0):
                    return False
                elif(st[-1]=='{'):
                    st.pop()
                else:
                    return False
            elif (s[i]==')'):
                if (len(st)==0):
                    return False
                elif(st[-1]=='('):
                    st.pop()
                else:
                    return False
        if len(st) !=0:
            return False
        else:
            return True




        # for i in range(len(s)//2):
        #     st.append(s[i])
        # for i in range((len(s)//2),len(s)):
        #     if (s[i]==']'):
        #         if st[-1]=='[':
        #             st.pop()
        #         else:
        #             return False
        #     if (s[i]==')'):
        #         if st[-1]=='(':
        #             st.pop()
        #         else:
        #             return False
        #     if (s[i]=='}'):
        #         if st[-1]=='{':
        #             st.pop()
        #         else:
        #             return False
        # return True
        
            
            
        
                