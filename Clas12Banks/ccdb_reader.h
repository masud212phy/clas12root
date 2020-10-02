#ifndef CCDB_READER_H
#define CCDB_READER_H

#include "ccdb_vals.h"
#include "CCDB/CalibrationGenerator.h"
#include "CCDB/Calibration.h"

#include <iostream>
#include <chrono>
#include <string>

namespace clas12 {
  using std::cout;
  using std::endl;
  using std::string;

  
  class ccdb_reader {

  public:

    ccdb_reader(int runNb);
    ccdb_reader(std::string path, int runNb);
    bool check();
    void close();

    vector<vector<double>> getTableDoubles(std::string);

  private:

    ccdb_reader()=default;
    ccdb::CalibrationGenerator _gen;
    std::unique_ptr<ccdb::Calibration> _calib ={nullptr};

  };

}
#endif /* CCDB_READER_H */
