def vowelfn(name):
	vowels= ('a','A','e','E','i','I','o','O','u','U')
	for x in name:
		if x in vowels:
			name=name.replace(x,"")
	print("Your name When Vowels are removed is : ",name)


name=input('This program removes vowel from your name and prints!\nEnter your Name: ')
vowelfn(name)
