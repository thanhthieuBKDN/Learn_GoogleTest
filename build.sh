
cd build

# install live preview extension to view coverage report
# Thu thập coverage
lcov --capture --directory . --output-file coverage.info

# Lọc bỏ thư viện hệ thống và Google Test
lcov --remove coverage.info '/usr/*' '*/googletest/*' '*/phanso/*' --output-file coverage_filtered.info
lcov --remove coverage_filtered.info '*/phanso.h' '*/phanso.cpp' --output-file coverage_filtered.info
# Tạo báo cáo HTML
genhtml coverage_filtered.info --output-directory coverage_report

echo "Coverage report generated in coverage_report/index.html"