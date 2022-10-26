import requests

cat = 'https://meowfacts.herokuapp.com/'
cat_res = requests.get(cat)

cat_fact = cat_res.json()['data']

print(f"Cat Fact : {cat_fact[0]}")
