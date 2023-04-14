<template>
  <div class="menu">
    <a v-for="(작명, i) in 메뉴들" :key="i"> {{ 작명 }}</a>
  </div>
  <div>
    <h4 :style="스타일">XX 원룸</h4>
    <p>{{ price1 }} 만원</p>
  </div>
  <div>
    <h4>{{ products[0] }}</h4>
    <p>50만원</p>
    <button @click="increase()">허위매물신고</button>
    <span>신고수 : {{ 신고수 }}</span>
  </div>
  <div>
    <h4>{{ products[1] }}</h4>
    <p>50만원</p>
  </div>
  <div>
    <h4>{{ products[2] }}</h4>
    <p>50만원</p>
  </div>
</template>

<script>
export default {
  name: "App",
  data() {
    return {
      price1: 60,
      스타일: "color:red",
      products: ["역삼동", "천호동", "마포구"],
      메뉴들: ["Home", "Shop", "About"],
      신고수: 0,
    };
  },
  methods: {
    increase() {
      this.신고수 += 1;
    },
  },
};
</script>

<style>
.menu {
  background: darkslateblue;
  padding: 15px;
  border-radius: 5px;
}
.menu a {
  color: white;
  padding: 10px;
}
</style>
