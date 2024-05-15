/****************************************************
/* Averaging Filter for Arduino Application
/* 使い方：
/*  1. AveragingFilterクラスをインスタンス化
/*  2. init関数の引数でサンプリング数を設定
/*  3. storeMeasuredData関数の引数でデータを保存
/*  4. outputAveragingData関数でアベレージング処理した
/*     データを出力
/***************************************************/
#ifndef AVERAGINGFILTER_H
#define AVERAGINGFILTER_H


class AveragingFilter{
  private:
    int sampleNum;
    int ctAvg;
    float *data;
    bool flag_rotation;

  public:
    void init(int fixedSampleNum);
    void storeMeasuredData(float input);
    float outputAveragingData();

};


#endif