from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/')
def index():
    return "School Competition Server is running!"

@app.route('/compare', methods=['POST'])
def compare():
    """Accepts JSON with two numbers and returns which is larger or if equal.
    Example payload: {"a": 5, "b": 10}
    """
    data = request.get_json(force=True)
    a = data.get('a')
    b = data.get('b')
    if a is None or b is None:
        return jsonify({'error': 'Both "a" and "b" must be provided.'}), 400

    try:
        a_val = float(a)
        b_val = float(b)
    except ValueError:
        return jsonify({'error': 'Values must be numeric.'}), 400

    if a_val < b_val:
        result = 'b is larger'
    elif a_val > b_val:
        result = 'a is larger'
    else:
        result = 'equal'

    return jsonify({'result': result, 'a': a_val, 'b': b_val})

if __name__ == '__main__':
    # run on port 8181 as requested
    app.run(host='0.0.0.0', port=8181)
