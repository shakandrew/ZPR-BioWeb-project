angular.module("myApp", [])
    .controller("firstCtrl", function ($scope, $http) {
        $scope.number = "";
        $scope.message = "";
        $scope.check = function () {
            if ($scope.number !== "") {
                let config = {
                    method: 'GET',
                    url: 'is_prime?number=' + $scope.number
                };


                var data = null;
                $http(config).then(function (response) {
                    $scope.message = response.data.prime;
                });
                console.log($scope.message);
            }
        }
    });
