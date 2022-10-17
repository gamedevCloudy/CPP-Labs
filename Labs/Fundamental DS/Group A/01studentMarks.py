class SubHandler:
	marks = []
	
	def ReadMarks(self):
		x = int(input("Enter no. of studnents: "))
		print("Enter marks of class: ")
		for i in range(0,x): 
			x = str(input(self.sub[i] + "'s marks': "))
			if(x!= "AB"): 
				self.marks[i] =int(x)
			else:
				self.marks[i] = (-1)

	def Display(self): 
			for i in range(len(self.marks)):
				print(i, endl = " ")

	def MinMaxAvg(self): 
		minMarks = min(self.marks)
		print("Minimum Marks: " + str(minMarks))

		maxMarks = max(self.marks)
		print("Maximum marks: " + str(maxMarks))
		sum = 0
		for i in range(0,len(self.sub)): 
			sum += marks[i]
		avg = sum/len(self.sub)
		print("Average Marks: " + str(avg))
	
	def mostfreq(): 
		x = self.marks.sort()
		y = set(self.marks)
		
		for i in range(len(y)): 
			count = 0
			for j in range(self.marks): 
				if(i == j ): count+=1

			print(i, "occured", count, "times")




	

	