from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

@app.route('/')
def index():
    """메인 페이지 렌더링"""
    return render_template('index.html')

# 필요한 경우 API 엔드포인트 추가 가능
# 예: 랜덤 숫자 생성 API (서버에서 관리하고 싶을 경우)
@app.route('/api/random', methods=['GET'])
def get_random_number():
    """0-9 사이의 랜덤 숫자 생성"""
    import random
    return jsonify({'number': random.randint(0, 9)})

if __name__ == '__main__':
    app.run(debug=True) 