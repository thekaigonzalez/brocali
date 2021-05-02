



#Get first arguments

# shellcheck disable=SC2034
FILE=$1

cd ..

# Create a build
mkdir "build" || echo "FAILED: Could not create directory build" && exit


cd build || echo "FAILED: Could not CD into directory \"Build\". Ensure that this script has 100% Disk read / Write Access." && exit

make .. all